class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>result;
        int low = 0, n = intervals.size();

        // flag that start of newInterval was found
        // done that the interval has been inserted
        bool flag = 0, done = 0;

        for(int i = 0;i<n;i++)
        {
            if(flag)
            {
                // the start of the interval to be inserted was found
                if(newInterval[1] >= intervals[i][0] && newInterval[1] <= intervals[i][1])
                {
                    result.push_back({low, intervals[i][1]});
                    flag = 0;
                    done = 1;
                }else if(newInterval[1] < intervals[i][0])
                {
                    flag = 0;
                    result.push_back({low, newInterval[1]});
                    result.push_back(intervals[i]);
                done = 1;
                }
                else if(i + 1 == n)
                {
                    flag = 0;
                    result.push_back({low, newInterval[1]});
                    done = 1;
                }
            }else if(newInterval[0] >= intervals[i][0] && newInterval[0] <= intervals[i][1])
            {
                // the start is part of a current interval
                low = intervals[i][0];
                if(intervals[i][1] >= newInterval[1])
                {
                result.push_back(intervals[i]);
                done=1;
                }
                else if(i+1==n)
                {
                result.push_back({low, newInterval[1]});
                done = 1;}
                // else if(intervals[i+1][0]>newInterval[1])
                // {
                // result.push_back({low, newInterval[1]});
                // done = 1;
                // }
                else
                {
                flag = 1;
                }
            }else if(newInterval[0] < intervals[i][0]&&!done)
            {
                // the start is not a part of an interval
                low = newInterval[0];
                if(newInterval[1]<intervals[i][0])
                {
                    result.push_back(newInterval);
                    result.push_back(intervals[i]);
                    done = 1;
                }else if(intervals[i][1] >= newInterval[1])
                {
                    result.push_back({low, intervals[i][1]});
                    done = 1;
                }else
                {
                    flag = 1;
                }
            }
            else
            {
                // the current interval is far from newInterval
                result.push_back(intervals[i]);
            }
        }
        
        if(!done)
        {
            // the interval was not inserted 
            result.push_back(newInterval);
        }
        return result;
    }
};