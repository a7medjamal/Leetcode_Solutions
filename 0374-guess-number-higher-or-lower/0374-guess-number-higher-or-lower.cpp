/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    }
    int guessNumber(int n) {
        int l=1,r=n,mid;
        while(l<=r) {
            mid = l+(r-l)/2;
            if(!guess(mid)) return mid;
            else if(guess(mid)==1) l=mid+1;
            else r=mid-1;
        }
        return 0;
    }
};