p = input()

dict = {
  "L": 1,
  "R": -1,
}

abc = {
  "0": "q",
  "1": "w",
  "2": "e",
  "3": "r",
  "4": "t",
  "5": "y",
  "6": "u",
  "7": "i",
  "8": "o",
  "9": "p",
  "10": "a",
  "11": "s",
  "12": "d",
  "13": "f",
  "14": "g",
  "15": "h",
  "16": "j",
  "17": "k",
  "18": "l",
  "19": ";",
  "20": "z",
  "21": "x",
  "22": "c",
  "23": "v",
  "24": "b",
  "25": "n",
  "26": "m",
  "27": ",",
  "28": ".",
  "29": "/",
} 

s = input()
rp = 0

for key in dict.keys():
  if key == p:
    rp = dict[key]

ans = ''
i = 0
for _ in s:
  for key in abc.keys():
    if abc[key] == s[i]:
      ans += abc[str(int(key) + rp)]
  i += 1

print(ans)

s=input()
a="qwertyuiopasdfghjkl;zxcvbnm,./"
for l in input():
  print(a[a.index(l)+[1,-1][s=='R']],end='')