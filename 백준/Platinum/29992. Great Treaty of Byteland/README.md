# [Platinum IV] Great Treaty of Byteland - 29992 

[문제 링크](https://www.acmicpc.net/problem/29992) 

### 성능 요약

메모리: 5516 KB, 시간: 76 ms

### 분류

볼록 껍질, 기하학

### 제출 일자

2025년 5월 27일 16:49:08

### 문제 설명

<p>The Great War of Byteland is over. The remaining kingdoms are now discussing the Division Treaty, which will split all the land in the world among them. It will refer not only to the known world, but also to any territories yet to be discovered or inhabited, including land or sea. We can assume that the world is an infinite flat plane.</p>

<p>Each kingdom in the continent of Byteland has a single capital, and the Division Treaty will be based on their locations: it declares that each piece of land belongs to the kingdom whose capital is the nearest in a bird’s flight (or in a straight line). In other words: wherever you are in the world, if C is the single nearest capital to you, you will be in the territory of C’s kingdom. If there is a tie between the distances of two or more capitals, that place will be in the border between their kingdoms.</p>

<p>Under this treaty, some kingdoms may end up enclosed between others, while other kingdoms may end up with unlimited territory. Therefore, some monarchs are contesting the treaty. To inform this discussion, they demand your help. Given the location coordinates of each capital in the continent of Byteland, you must find out which kingdoms would have infinite territories under the Division Treaty.</p>

### 입력 

 <p>The first input line contains a single integer N (2 ≤ N ≤ 10<sup>5</sup>), the number of kingdoms. Each kingdom is identified by an unique integer between 1 and N. Each of the N following lines contains two integers X and Y (0 ≤ X, Y ≤ 10<sup>4</sup>), the 2D coordinates of the location of a kingdom’s capital. The capitals are given in increasing order of kingdom identifier, no two capitals have the same location, and you can assume that every capital has negligible size.</p>

### 출력 

 <p>Print a single line with a list of space-separated integers in increasing order: the identifiers of the kingdoms that would have infinite territories under the described Division Treaty. It’s guaranteed that there is always at least one such kingdom.</p>

