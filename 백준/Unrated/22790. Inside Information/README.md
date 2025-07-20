# [Unrated] Inside Information - 22790 

[문제 링크](https://www.acmicpc.net/problem/22790) 

### 성능 요약

메모리: 2092 KB, 시간: 0 ms

### 분류

애드 혹, 이분 탐색, 기하학, 볼록 다각형 내부의 점 판정, 문자열

### 제출 일자

2025년 7월 20일 21:11:16

### 문제 설명

<p>You are given the vertices of a simple, convex polygon. “Simple” means that there are no crossing or overlapping edges. “Convex” means that, as you walk around the polygon, you keep moving consistently clockwise (or counterclockwise) relative to any point strictly inside the polygon. You are also given a set of points. Your task is to find the number of those points that are enclosed by the polygon. Points are “enclosed” if they are inside the polygon, or lie on an edge, or are coincident with a polygon vertex. All points and polygon vertices lie on an integer grid, with absolute coordinate values being less than 1000.</p>

### 입력 

 <p>There will be one or more data sets in the input file. Each data set contains:</p>

<ul>
	<li>First line: the number of vertices (n, with 3 ≤ n ≤ 100), and the number of points (m, with 1 ≤ m ≤ 100)</li>
	<li>Next n lines: x- and y-coordinates of polygon vertices in either clockwise or counterclockwise order.</li>
	<li>Next m lines: x- and y-coordinates of points.</li>
</ul>

<p>The last data set contains 0 0 for the first line, and is not to be processed.</p>

### 출력 

 <p>For each data set, print the number of the set, where the first set is set 1, and the number of points enclosed.</p>

