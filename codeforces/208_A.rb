s = gets.chomp
s = s.split("WUB")
ans = ''
s.each do |w|
  ans += "#{w} " if w != ''
end
print ans