# [Platinum II] Star Trappers - 23078 

[문제 링크](https://www.acmicpc.net/problem/23078) 

### 성능 요약

메모리: 2092 KB, 시간: 12 ms

### 분류

브루트포스 알고리즘, 기하학, 볼록 다각형 내부의 점 판정

### 제출 일자

2025년 1월 26일 15:17:47

### 문제 설명

<p>John and Ada are sitting on the grass above a small hill. It is midnight and the sky is full of stars. The sky looks like a 2D plane from so far away and the stars look like points on that plane. Ada loves blue stars and suddenly she notices one, while all the other stars in the sky are white. She loves the blue star so much that she wants to trap it. And she asks John for help.</p>

<p>Ada will tell John the position of the blue star and he has to trap it. To trap it, John has to draw a polygon in the sky with his buster sword, so that the blue star is strictly inside the polygon (not on the border of the polygon) and the polygon has the smallest possible perimeter. The vertices of the polygon must be the white stars.</p>

<p>Even though John is super awesome, he needs your help. Given the positions of the white stars and the blue star, you need to find out whether John can trap the blue star and if he can, also find the minimum length of the perimeter of the polygon he will use.</p>

### 입력 

 <p>The first line of the input gives the number of test cases, $T$. $T$ test cases follow.</p>

<p>For each test case, the first line contains an integer $N$, it denotes the number of white stars in the sky.</p>

<p>The next $N$ lines will each contain two integers, $X_i$ and $Y_i$. The $i$-th pair of integers denotes the <i>x</i> and <i>y</i> coordinates of the $i$-th star in the sky.</p>

<p>After these $N$ lines, there will be one last line, which will contain two integers, $X_s$ and $Y_s$, which denote the <i>x</i> and <i>y</i> coordinates of the blue star.</p>

### 출력 

 <p>For each test case, output one line containing <code>Case #x: y</code>, where $x$ is the test case number (starting from 1) and $y$ is the minimum length of the perimeter of the polygon drawn to trap the shooting star. If it is impossible for John to draw a polygon that traps the star, then $y$ should be <code>IMPOSSIBLE</code>.</p>

<p>$y$ will be considered correct if it is within an absolute or relative error of $10^{-6}$ of the correct answer.</p>

