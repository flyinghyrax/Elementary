locate32, dbs = nil, nil

function Initialize()
	locate32 = SKIN:MakePathAbsolute(SKIN:GetVariable('PathToLocate32', '#@#Search\Locate32\locate32.exe'))
	dbs = SKIN:MakePathAbsolute(SKIN:GetVariable('PathToDB', '#@#Search\Locate32\index.dbs'))
	print ('path to l32: ' .. locate32)
	print ('path to db: ' .. dbs)
end

function Search(input)
	local bangStr = '"https://duckduckgo.com/?q='..input..'"'
	if string.find(input, '^!locate ') then
		input = string.gsub(input, '^!locate ', '', 1)
		print ('trying locate32 w/ terms ' .. input)
		bangStr = '"'..locate32..'" -d "'..dbs..'" -r -- '..input
	end
	print (bangStr)
	SKIN:Bang(bangStr)
end