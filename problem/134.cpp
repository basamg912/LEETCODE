class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int size = gas.size();
        int rest;
        int total = 0;
        int curr = 0;
        int idx = 0;
        for (int i = 0; i<size; i++){
            rest = gas[i] - cost[i];
            total += rest;
            curr += rest;
            if (curr < 0){
                curr = 0;
                idx= i+1;
            }
        }
        if (total < 0)  return -1;
        return idx;
    }
};
/*
---------PROBLEM
cost : cost[i] 는 i->i+1 스테이션까지 가는데 소모되는 가스의 양
gas : gas[i] 는 i번째 스테이션이 가지고 있는 gas 의 양
car : car 는 무제한 연료 탱크 가지고 있음

input : (cost, gas)
output : i번째 station 에서 텅 빈 연료탱크로 시작했을때, 시계방향으로 1바퀴 순환이 가능한지. i 를 반환, 없으면 -1 반환
----------APPROACH
+ 기본 접근법
gas 1,2,3,4,5 / cost 3,4,5,1,2 -> rest[-2, -2, -2, 3, 3]
output = 3(index)

+ 시작점 찾기
rest = [1 -3 1 -2 3] -> output = 4
0 인덱스는 왜 안되는가? 다음 지점에서 -2가 되어서 안된다.
total 1 -> -2 -> -1 -> -3 -> 0
!!! rest < 0 인 지점은 어짜피 시작점으로 사용 불가능하다

total 로 순회가 가능한지 검사하고, 매 iteration 에서 시작점 검사는 rest 로 진행
*/
