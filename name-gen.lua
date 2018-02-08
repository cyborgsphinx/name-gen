phonemes = { 'ay', 'a', 'b', 'k', 'd', 'ee', 'ea',
             'f', 'g', 'h', 'igh', 'i', 'j', 'l',
             'm', 'n', 'oa', 'o', 'p', 'qu', 'r',
             's', 't', 'ew', 'u', 'v', 'w', 'x',
             'y', 'z', 'oo', 'oi', 'ou', 'aw', 'ar',
             'sh', 'wh', 'ch', 'th', 'ng', 'er' }
 
math.randomseed(os.time())
--num = 3
--if arg[1] ~= nil then
    n = tonumber(arg[1])
    num = n or 3 -- default to 3
--end
out = ''
for i=1,num do
    val = math.random(table.getn(phonemes))
    out = out .. phonemes[val]
end

io.write(out, '\n')
