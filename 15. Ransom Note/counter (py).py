class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        for ch in ransomNote:
            if ransomNote.count(ch) > magazine.count(ch):
                return False
            
        return True