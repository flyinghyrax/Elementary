function Initialize()
	newMinutes = tonumber(SKIN:GetVariable('NewMinutes'))
end

function CheckNew(measureArg, meterArg, measureAgeArg)
	local timeString = SKIN:GetMeasure(measureArg):GetStringValue()
	local timeDifference = os.time(os.date('!*t')) - TimeStamp(timeString)

	local timeDifferenceFormat = ConvertSeconds(timeDifference)
	local minText = timeDifferenceFormat.mins == 1 and "minute" or "minutes"
	local hourText = timeDifferenceFormat.hours == 1 and "hour" or "hours"
	local dayText = timeDifferenceFormat.days == 1 and "day" or "days"

	if timeDifference > 86400 then
		ageDisplay = timeDifferenceFormat.days..' '..dayText..' '..timeDifferenceFormat.hours..' '..hourText..' '..timeDifferenceFormat.mins..' '..minText
	elseif timeDifference < 3600 then
		ageDisplay = timeDifferenceFormat.mins..' '..minText
	else
		ageDisplay = timeDifferenceFormat.hours..' '..hourText..' '..timeDifferenceFormat.mins..' '..minText
	end

	SKIN:Bang('!SetOption', measureAgeArg, 'Format', ageDisplay)
	SKIN:Bang('!SetOption', meterArg, 'FontColor', timeDifference / 60 <= newMinutes and '#highlight#' or '#color#')
	SKIN:Bang('!UpdateMeter', '*')
	SKIN:Bang('!Redraw')
end

function TimeStamp(itemDate)
	-- Feed date format : 2013-12-07T01:23:32Z
	local year, month, day, hour, min, sec, zone = itemDate:match("(.-)-(.-)-(.-)T(.-):(.-):(.-)(.-)")
	return os.time{year = year, month = month, day = day, hour = hour, min = min, sec = sec, isdst = false}
end

function ConvertSeconds(secondsDiff)
	return {
		days = math.floor(secondsDiff / 86400),
		hours = math.floor((secondsDiff % 86400) / 3600),
		mins = math.floor(((secondsDiff - 86400) % 3600) / 60),
	}
end
