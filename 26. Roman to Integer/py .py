class Solution:
    def romanToInt(self, s: str) -> int:
        num = 0
        flag = False

        for i in range(len(s) - 1, -1, -1):
            if flag:
                flag = not flag
                continue
            # print("i: ", i,"   num: ", num)
            if(s[i] == 'I'):
                num += 1

            elif s[i] == 'V':
                num += 5

                if i > 0 and s[i - 1] == 'I':
                        num -= 1
                        flag = True
                    
            elif s[i] == 'X':
                num += 10

                if i >0 and s[i - 1] == 'I':
                    num -= 1
                    flag = True

            elif s[i] == 'L':
                num += 50

                if i >0 and s[i - 1] == 'X':
                    num -= 10
                    flag = True
            
            elif s[i] == 'C':
                num += 100

                if i >0 and s[i - 1] == 'X':
                    num -= 10
                    flag = True
    
            elif s[i] == 'D':
                num += 500

                if i >0 and s[i - 1] == 'C':
                    num -= 100
                    flag = True
        
            elif s[i] == 'M':
                num += 1000

                if i >0 and s[i - 1] == 'C':
                    num -= 100
                    flag = True

            # print("i after: ", i,"   num: ", num)

        return num