# [Diamond V] Weird Flecks, But OK - 21182 

[문제 링크](https://www.acmicpc.net/problem/21182) 

### 성능 요약

메모리: 2148 KB, 시간: 2128 ms

### 분류

기하학, 휴리스틱, 최소 외접원

### 제출 일자

2024년 8월 29일 18:40:44

### 문제 설명

<p>An artist who wanted to create an installation where his works appeared to be floating in midair has cast a large cube of clear acrylic to serve as a base. Unfortunately, during the casting, some small flecks of dirt got into the mix, and now appear as a cluster of pinpoint flaws in the otherwise clear cube.</p>

<p>He wants to drill out the portion of the cube containing the flaws so that he can plug the removed volume with new, clear acrylic. He would prefer to do this in one drilling step. For stability's sake, the drill must enter the cube perpendicular to one of its faces.</p>

<p>Given the $(x,y,z)$ positions of the flaws, and treating the size of the flaws as negligible, what is the smallest diameter drill bit that can be used to remove the flaws in one operation??</p>

<p>The drill may enter any one of the cube faces, but must be positioned orthogonally to the face. </p>

### 입력 

 <p>The first line of input will contain an integer $N$ denoting the number of flaws. $3 \leq N \leq 5\,000$</p>

<p>This is followed by $N$ lines of input, each containing three real numbers in the range $-1\,000.0\ldots 1\,000.0$, denoting the $(x,y,z)$ coordinates of a single flaw. Each number will contain at most $6$ digits following a decimal point. The decimal point may be omitted if all succeeding digits are zero.</p>

### 출력 

 <p>Print the diameter of the smallest drill bit that would remove all the flaws.</p>

<p>The answer is considered correct if the absolute or relative error is less than $10^{-4}$</p>

