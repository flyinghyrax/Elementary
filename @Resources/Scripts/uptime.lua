function Initialize()
	upt_measure = SKIN:GetMeasure('measureUptime')
end

function Update()
	local seconds = upt_measure:GetValue()
	local time_table = BreakSeconds(seconds)

	local dayText = time_table.days > 1 and 'days' or 'day'
	local hourText = time_table.hours > 1 and 'hours' or 'hour'
	local minText = time_table.mins > 1 and 'minutes' or 'minute'
	local secText = time_table.secs > 1 and 'seconds' or 'second'

	if time_table.days > 0 then
		return string.format('%d %s %d %s', time_table.days, dayText, time_table.hours, hourText)
	elseif time_table.hours > 0 then
		return string.format('%d %s %d %s', time_table.hours, hourText, time_table.mins, minText)
	elseif time_table.mins > 0 then
		return string.format('%d %s %d %s', time_table.mins, minText, time_table.secs, secText)
	else
		return string.format('%d %s', time_table.secs, secText)
	end
end

function BreakSeconds(seconds)
	return {
		days = math.floor(seconds / 86400),
		hours = math.floor( (seconds % 86400) / 3600 ),
		mins = math.floor(((seconds % 86400) % 3600) / 60),
		secs = math.floor(((seconds % 86400) % 3600) % 60)
	}
end
