locate32, dbs = nil, nil

function Initialize()
	locate32 = SKIN:MakePathAbsolute(SKIN:GetVariable('PathToLocate32', '#@#Search\Locate32\locate32.exe'))
	dbs = SKIN:MakePathAbsolute(SKIN:GetVariable('PathToIndex', '#@#Search\Locate32\index.dbs'))
end

function Search(input)
	local bangStr = '"https://duckduckgo.com/?q='..input..'"'
	if string.find(input, '^!locate ') then
		input = string.gsub(input, '^!locate ', '', 1)
		bangStr = '"'..locate32..'" -d "'..dbs..'" -r -- '..input
	end
	SKIN:Bang(bangStr)
end