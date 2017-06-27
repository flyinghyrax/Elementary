function Initialize()
	upt_measure = SKIN:GetMeasure('measureUptime')
	stopShowingSeconds = math.floor(tonumber(SKIN:GetVariable('stopShowingSeconds')))
end

function Update()
	local seconds = upt_measure:GetValue()

	-- turn the total seconds into days, hours, minutes, and seconds
	local d = math.floor(seconds / 86400)
	local h = math.floor((seconds % 86400) / 3600 )
	local m = math.floor(((seconds % 86400) % 3600) / 60)
	local s = math.floor(((seconds % 86400) % 3600) % 60)

	-- assign a string label for each of those quantities
	local dtxt = d > 1 and 'days' or 'day'
	local htxt = h > 1 and 'hours' or 'hour'
	local mtxt = m > 1 and 'minutes' or 'minute'
	local stxt = s > 1 and 'seconds' or 'second'

	-- Return a different string depending on how much time has passed:
	-- Days and hours for more than a day
	if d >= 1 then
		return string.format('%d %s %d %s', d, dtxt, h, htxt)
	-- Hours and minutes for more than an hour
	elseif h >= 1 then
		return string.format('%d %s %d %s', h, htxt, m, mtxt)
	-- Just minutes after some minutes
	elseif m >= stopShowingSeconds then
		return string.format('%d %s', m, mtxt)
	-- Minutes and seconds after one minute (but less than five)
	elseif m >= 1 then
		return string.format('%d %s %d %s', m, mtxt, s, stxt)
	-- Otherwise it's been less than a minute, so only show seconds
	else
		return string.format('%d %s', s, stxt)
	end
end
