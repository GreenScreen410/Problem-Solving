# [Diamond II] Convex area - 7684 

[문제 링크](https://www.acmicpc.net/problem/7684) 

### 성능 요약

메모리: 2088 KB, 시간: 8 ms

### 분류

기하학, 볼록 껍질, 3차원 기하학

### 제출 일자

2025년 1월 29일 15:09:12

### 문제 설명

<p>A 3-dimensional shape is said to be convex if the line segment joining any two points in the shape is entirely contained within the shape. Given a general set of points X in 3-dimensional space, the convex hull of X is the smallest convex shape containing all the points.</p>

<p>For example, consider X = {(0, 0, 0),(10, 0, 0),(0, 10, 0),(0, 0, 10)}. The convex hull of X is the tetrahedron with vertices given by X. Note that the tetrahedron contains the point (1, 1, 1), so even if this point were added to X, the convex hull would not change.</p>

<p>Given X, your task is to find the surface area of the convex hull of X, rounded to the nearest integer.</p>

<p>NOTE: The convex hull of any point set will have polygonal faces. For this problem, you may assume there will be at most 3 points in X on any face of the convex hull.</p>

### 입력 

 <p>The input test file will contain multiple test cases, each of which begins with an integer n (4 ≤ n ≤ 25) indicating the number of points in X. This is followed by n lines, each containing 3 integers giving the x, y and z coordinate of a single point. All coordinates are between -100 and 100 inclusive. The end-of-file is marked by a test case with n = 0 and should not be processed.</p>

### 출력 

 <p>For each test case, write a single line with the surface area of the convex hull of the given points. The answer should be rounded to the nearest integer (e.g., 2.499 rounds to 2, but 2.5 rounds to 3).</p>

