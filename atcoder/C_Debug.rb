s = gets.chomp

while s.include?"WA"
  s = s.gsub("WA", "AC")
end
print s