# [Platinum II] Cow Curling - 9875 

[문제 링크](https://www.acmicpc.net/problem/9875) 

### 성능 요약

메모리: 4760 KB, 시간: 304 ms

### 분류

볼록 껍질, 기하학, 볼록 다각형 내부의 점 판정

### 제출 일자

2024년 9월 24일 11:04:50

### 문제 설명

<p>Cow curling is a popular cold-weather sport played in the Moolympics.</p><p>Like regular curling, the sport involves two teams, each of which slides N heavy stones (3 <= N <= 50,000) across a sheet of ice.  At the end of the game, there are 2N stones on the ice, each located at a distinct 2D point.  Scoring in the cow version of curling is a bit curious, however.  A stone is said to be "captured" if it is contained inside a triangle whose corners are stones owned by the opponent (a stone on the boundary of such a triangle also counts as being captured).  The score for a team is the number of opponent stones that are captured.</p><p>Please help compute the final score of a cow curling match, given the locations of all 2N stones.</p>

### 입력 

 <ul><li>Line 1: The integer N.</li><li>Lines 2..1+N: Each line contains 2 integers specifying the x and y coordinates of a stone for team A (each coordinate lies in the range -40,000 .. +40,000).</li><li>Lines 2+N..1+2N: Each line contains 2 integers specifying the x and y coordinates of a stone for team B (each coordinate lies in the range -40,000 .. +40,000).</li></ul>

### 출력 

 <ul><li>Line 1: Two space-separated integers, giving the scores for teams A and B.</li></ul>

