int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
    int stuCnt = 0;
    for(int i=0;i<startTime.size();i++){
        if(endTime[i]>=queryTime && queryTime>=startTime[i]){
            stuCnt++;
        }
    }
    return stuCnt;
}
