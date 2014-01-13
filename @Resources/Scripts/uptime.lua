function Initialize()
	upt_measure = SKIN:GetMeasure('measureUptime')
end

function Update()
	local seconds = upt_measure:GetValue()
	local retval = ""
	if seconds > 86400 then
		retval = string.format('%dd %dh', math.floor(seconds / 86400), math.floor((seconds % 86400) / 3600))
	elseif seconds > 3600 then
		retval = string.format('%dh %dm', math.floor(seconds / 3600), math.floor((seconds % 3600) / 60))
	elseif seconds > 60 then
		retval = string.format('%dm %ds', math.floor(seconds / 60), math.floor(seconds % 60))
	else	-- less than one minute
		retval = string.format('%ds', seconds)
	end
	return retval;
end