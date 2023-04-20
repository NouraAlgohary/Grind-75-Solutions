class Solution:
    def countBits(self, n: int) -> List[int]:
        bits = [] 

        def BitsCounter(n):
            binary = bin(n)
            cnt = 0

            for bit in binary:
                if bit == '1':
                    cnt += 1

            return cnt

        for num in range(n+1):
            bits.append(BitsCounter(num))

        return bits