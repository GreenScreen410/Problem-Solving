# [Diamond III] Faster Than Light - 26179 

[문제 링크](https://www.acmicpc.net/problem/26179) 

### 성능 요약

메모리: 27112 KB, 시간: 180 ms

### 분류

볼록 껍질, 기하학, 볼록 다각형 내부의 점 판정

### 제출 일자

2025년 1월 28일 17:34:01

### 문제 설명

<p><em>Faster Than Light (FTL)</em> is a space-based top-down strategy game by Subset Games. You control a ship which belongs to the <em>Galactic Federation</em> and have to fight a ship of the <em>Rebel Faction</em>. The enemies' spaceship is represented by a set of axis-aligned non-intersecting rectangles in the plane which correspond to the rooms of the ship. Your ship is close to destruction, but your weapon, the <em>hull beam</em>, is ready to fire.</p>

<p>The hull beam shoots an infinite beam in a direction of your choice that deals one damage to each room it intersects. Coincidentally, the enemies' ship consists of $n$ rooms and has exactly $n$ health points. Thus, you need to hit every room to destroy the enemy before they destroy you. Now you quickly need to check if it is possible to position the beam in such a way. Note that the beam deals damage even when it only touches the boundary of a room. See Figure F.1 for an example.</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/0b40ed02-88c7-40b8-b163-25528b93aff1/-/preview/" style="width: 300px; height: 179px;"></p>

<p style="text-align: center;">Figure F.1: Illustration of Sample Input 1, which consists of five grey rooms. The hull beam in red hits all rooms and is the only valid solution in this case.</p>

### 입력 

 <p>The input consists of:</p>

<ul>
	<li>One line with an integer $n$ $(1\leq n \leq 2\cdot10^5)$, the number of rooms.</li>
	<li>$n$ lines, each with four integers $x_1$, $y_1$, $x_2$, and $y_2$ (${0\leq x_1<x_2\leq10^9}$ and ${0\leq y_1<y_2\leq10^9}$), describing the coordinates of two opposite corners ($x_1$,$y_1$) and ($x_2$,$y_2$) of a room.</li>
</ul>

<p>It is guaranteed that no two rooms have a common interior point.</p>

### 출력 

 <p>If it is possible for the hull beam to pass through all rooms at once, output "<code>possible</code>". Otherwise, output "<code>impossible</code>".</p>

