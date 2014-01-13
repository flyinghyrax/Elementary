locate32, dbs = nil, nil

function Initialize()
	locate32 = SKIN:MakePathAbsolute(SKIN:GetVariable('PathToLocate32', '#@#Addons\\Locate32\\locate32.exe'))
	dbs = SKIN:MakePathAbsolute(SKIN:GetVariable('PathToIndex', '#@#Addons\\Locate32\\index.dbs'))
end

function Search(input)
	if input:find('^!locate ') then
		SKIN:Bang(string.format('%q -d %q -r -- %s', locate32, dbs, input:match('^!locate (.+)')))
	else
		SKIN:Bang(string.format('"https://duckduckgo.com/?q=%s"', input))
	end
end