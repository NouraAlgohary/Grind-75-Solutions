class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
        s_after = t_after = ""
        backspace = 0

        for i in range(len(s) - 1, -1, -1):
            if s[i] == '#':
                backspace += 1
            elif backspace:
                backspace -= 1
            else:
                s_after = s[i] + s_after

        backspace = 0

        for i in range(len(t) - 1, -1, -1):
            if t[i] == '#':
                backspace += 1
            elif backspace:
                backspace -= 1
            else:
                t_after = t[i] + t_after

        return True if s_after == t_after else False