# [Diamond IV] Mailing Origami - 10466 

[문제 링크](https://www.acmicpc.net/problem/10466) 

### 성능 요약

메모리: 4500 KB, 시간: 40 ms

### 분류

볼록 껍질, 기하학, 회전하는 캘리퍼스

### 제출 일자

2024년 9월 26일 10:31:25

### 문제 설명

<p><img alt="" src="https://www.acmicpc.net/upload/images2/dragonfly.jpg" style="float:right; height:270px; width:300px">You would like to mail some origami you have made to your mom.</p>

<p>The price of mailing is dependent on the area of the envelope used to mail it: the smaller the envelope area, the less cost to ship. You cannot fold the origami shape to make it smaller. Of course, the envelope you are shipping the origami in must be rectangular.</p>

<p>Consider the vertices which represent the points along the boundary of the paper in order, such that the edge of the paper may fold over itself. Given the verticies describing the origami shape, what is the area of the smallest envelope that you can use to mail the origami?</p>

### 입력 

 <p>The first line contains the integer <em>N</em> (3 ≤ N ≤ 100 000) which is the number of verticies describing your origami. The next <em>N</em> lines contain two integers, <em>x y</em>, the x-coordinate and y-coordinate of that particular vertex (0 ≤ <em>x</em> ≤ 10 000 000; 0 ≤ <em>y</em> ≤ 10 000 000). You should assume all verticies are distinct, and that there is no line which contains all verticies.</p>

### 출력 

 <p>Output the area of the smallest envelope that will contain the origami, rounded to the nearest integer. You can assume that no test case will have the area of the smallest envelope containing the given vertices have a fractional part between 0.49 and 0.51.</p>

