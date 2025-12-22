# [Platinum II] Crazy Fences - 5863 

[문제 링크](https://www.acmicpc.net/problem/5863) 

### 성능 요약

메모리: 2092 KB, 시간: 4 ms

### 분류

기하학, 오목 다각형 내부의 점 판정

### 제출 일자

2025년 12월 23일 08:59:00

### 문제 설명

<p>After visiting a modern art museum, Farmer John decides to re-design his farm by moving all of the N (1 <= N <= 1000) fences between his pastures! Each fence is described by a line segment in the 2D plane. If two fences meet, they do so only at their endpoints. Each fence touches exactly two other fences, one at both endpoints.</p>

<p>FJ has C cows (1 <= C <= 1000) on his farm. Each cow resides at a point in the 2D plane that is not on any fence, and no two cows reside at the same point. Two cows are said to be in the same community if one could walk to the other without touching any fences. Please help FJ determine the size of the largest community.</p>

### 입력 

 <ul>
	<li>Line 1: Two space-separated integers N and C.</li>
	<li>Lines 2..1+N: Each line contains four integers: x1, y1, x2, y2, indicating a fence from point (x1,y1) to point (x2,y2). All coordinates are integers in the range 0..1,000,000.</li>
	<li>Lines 2+N..1+N+C: Each line contains two integers x and y describing the location of a cow. All coordinates are integers in the range 0..1,000,000.</li>
</ul>

### 출력 

 <ul>
	<li>Line 1: The number of cows in the largest community.</li>
</ul>

