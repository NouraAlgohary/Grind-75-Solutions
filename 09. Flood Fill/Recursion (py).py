class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, color: int) -> List[List[int]]:
        if image[sr][sc] == color:
            return image
        
        pixel = int(image[sr][sc])

        def pixelFill(sr, sc):
            if sr < 0 or sc < 0 or sr == len(image) or sc == len(image[0]) or image[sr][sc] != pixel:
                return
            
            image[sr][sc] = color
            
            pixelFill(sr - 1, sc)
            pixelFill(sr + 1, sc)
            pixelFill(sr, sc - 1)
            pixelFill(sr, sc + 1)
        
        pixelFill(sr, sc)

        return image