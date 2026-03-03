# [Platinum II] Collider - 11836 

[문제 링크](https://www.acmicpc.net/problem/11836) 

### 성능 요약

메모리: 8704 KB, 시간: 72 ms

### 분류

자료 구조, 문자열, 로프

### 제출 일자

2026년 3월 3일 15:16:10

### 문제 설명

<p>Physicians are investigating particles of three types: x, y and z. They load a numbered row of n particles into collider. During the experiment an exposure on a concrete particle is having place, after which the particle disappears from i-th position of the row and instantly appears on position j. After disappearance of the particle numbers of particles to the right are decreased by 1 and after the appearance number of particles to the right of that place are increased by 1. After a number of exposures scientists want to know, which particle is on place k. Write program, which will help them.</p>

### 입력 

 <p>The first line of the input file contains two integer numeber: n — number of particles and m — total number of exposures and queries (1 ≤ n ≤ 1000000, 1 ≤ m ≤ 15000).</p>

<p>In the second line there is a sequence of characters x, y and z of length n. Each of the next m lines contains exposure or query description. Line, containing an exposure, starts with character a and space and contains two integer number from interval [1; n]. First number is start position of the particle during the exposure and the second one is finish position. Line, describing a query, starts with character q and space and contains one number from interval [1; n] — position, which scientists are interested in.</p>

### 출력 

 <p>Output one line for each question from input file. Line number i must contain the answer to the question i — name of the corresponding particle x, y or z.</p>

