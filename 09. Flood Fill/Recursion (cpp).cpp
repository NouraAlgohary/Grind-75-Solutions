class Solution {
public:
void Pixelfill(vector<vector<int>>& image, int sr, int sc, int stpixel,  int color)
{
    if(sr<0 || sr == image.size() || sc<0 || sc==image[0].size() || image[sr][sc] != stpixel)
        return;

    image[sr][sc] = color;
    Pixelfill(image, sr - 1, sc, stpixel, color);
    Pixelfill(image, sr + 1, sc, stpixel, color);
    Pixelfill(image, sr, sc - 1, stpixel, color);
    Pixelfill(image, sr, sc + 1, stpixel, color);
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc] == color)
            return image;
        Pixelfill(image, sr, sc ,image[sr][sc] ,color);
        return image;
    }
};