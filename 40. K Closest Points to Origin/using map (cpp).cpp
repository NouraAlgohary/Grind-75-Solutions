class Solution {
public:
    vector<vector<int>>  kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> kClosestPoints;
        multimap<float, vector<int>> distance_points;
        float distance = 0;

        for(auto point : points)
        {
            distance = sqrt(pow(point[0], 2)+ pow(point[1], 2));
            distance_points.insert(make_pair(distance, point));
        }
        for(auto point : distance_points)
        {
            if(!k)
                break;
            kClosestPoints.push_back(point.second);
            k--;
        }
        return kClosestPoints;
    }
};