/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
  bool doesIntersect(Interval a, Interval b) {
            if (min(a.end, b.end) < max(a.start, b.start)) return false;
            return true;
        }
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int sz = intervals.size();
            vector<Interval> result; 

            // check corner cases
            // Case : Empty intervals array
            if (sz == 0) {
                result.push_back(newInterval);
                return result;
            }
            // Case : newInterval comes at the beginning or at the end without overlap 
            if (newInterval.start > intervals[sz - 1].end || newInterval.end < intervals[0].start) {
                if (newInterval.end < intervals[0].start) {
                    result.push_back(newInterval);
                }
                for (int i = 0; i < sz; i++) {
                    result.push_back(intervals[i]);
                }
                if (newInterval.start > intervals[sz - 1].end) {
                    result.push_back(newInterval);
                }
                return result;
            }
            for (int i = 0; i < sz; i++) {
                bool intersect = doesIntersect(intervals[i], newInterval);
                if (!intersect) {
                    result.push_back(intervals[i]);
                    // check if newInterval lies between intervals[i] and intervals[i+1]
                    if (i < sz - 1 && newInterval.start > intervals[i].end && newInterval.end < intervals[i+1].start) {
                        result.push_back(newInterval);
                    }
                    continue;
                }
                // Now we know the interval overlaps. Lets find out how many intervals overlap. 
                int st = i; 
                cout<<i<<endl;
                while (i < sz && intersect) {
                    i++;
                    if (i == sz) intersect = false; 
                    else {
                        intersect = doesIntersect(intervals[i], newInterval);
                    }
                }
                i--;
                // Now all intervals from st to i overlap. 
                Interval toInsert(min(newInterval.start, intervals[st].start), max(newInterval.end, intervals[i].end));
                result.push_back(toInsert);
            }
            return result;
}
