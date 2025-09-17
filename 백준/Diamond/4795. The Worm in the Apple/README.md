# [Diamond I] The Worm in the Apple - 4795 

[문제 링크](https://www.acmicpc.net/problem/4795) 

### 성능 요약

메모리: 2244 KB, 시간: 932 ms

### 분류

볼록 껍질, 기하학, 3차원 기하학

### 제출 일자

2025년 9월 17일 14:21:30

### 문제 설명

<p>Willy the Worm was living happily in an apple – until some vile human picked the apple, and started to eat it! Now, Willy must escape!</p>

<p>Given a description of the apple (defined as a convex shape in 3D space), and a list of possible positions in the apple for Willy (defined as 3D points), determine the minimum distance Willy must travel to get to the surface of the apple from each point.</p>

### 입력 

 <p>There will be several test cases in the input. Each test case will begin with a line with a single integer n (4≤n≤1,000), which tells the number of points describing the apple.</p>

<p>On the next n lines will be three integers x, y and z (-10,000≤x,y,z≤10,000), where each point (x,y,z) is either on the surface of, or within, the apple. The apple is the convex hull of these points. No four points will be coplanar.</p>

<p>Following the description of the apple, there will be a line with a single integer q (1≤q≤100,000), which is the number of queries – that is, the number of points where Willy might be inside the apple. Each of the following q lines will contain three integers x, y and z (-10,000≤x,y,z≤10,000), representing a point (x,y,z) where Willy might be. All of Willy’s points are guaranteed to be inside the apple. The input will end with a line with a single 0.</p>

### 출력 

 <p>For each query, output a single floating point number, indicating the minimum distance Willy must travel to exit the apple. Output this number with exactly 4 decimal places of accuracy, using standard 5 up / 4 down rounding (e.g. 2.12344 rounds to 2.1234, 2.12345 rounds to 2.1235). Output each number on its own line, with no spaces, and do not print any blank lines between answers.</p>

