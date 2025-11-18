# [Unrated] Laser Lines - 6398 

[문제 링크](https://www.acmicpc.net/problem/6398) 

### 성능 요약

메모리: 2220 KB, 시간: 24 ms

### 분류

분류 없음

### 제출 일자

2025년 11월 18일 14:12:41

### 문제 설명

<p>A computer chip manufacturer has discovered a new way to combine opto-electronics and ordinary electronics by forming light-emitting and receiving nodes on the surface of the chip. These can be used to send messages to each other in a direct line-of-sight manner, thereby speeding up operation considerably by allowing a much greater density of information transfer. One difficulty is that the nodes must all be able to send messages to each other; no node should block the line-of-sight between two other nodes. The manufacturing method ensures that the nodes will be positioned exactly on the points of a lattice covering the chip, so their coordinates are given by integers between 0 and 9999 (inclusive) except that for technical reasons no node can appear at point (0, 0).</p>

<p>Write a program that will read in sets of coordinates of these nodes and determine whether any of them lie on lines containing three or more nodes. Because of the layout method used, it is envisaged that there may well be several lines containing three nodes, but that 'longer' lines will be increasingly rare. However, no line will contain more than 10 points.</p>

### 입력 

 <p>Input will consist of a series of data sets, each set containing the coordinates of between 3 and 300 points (both inclusive). Each set will start on a new line. The coordinates will be pairs of integers in the range 0 to 9999 and each set will be terminated by a pair of zeroes (0 0). Successive numbers will be separated by one or more spaces; in addition a data set may be split into several lines, such splits will only occur between coordinate pairs and never between the elements of a coordinate pair. The entire file will also be terminated by a pair of zeroes (0 0). Note that there will be several test cases, but only one will contain more than 100 points.</p>

### 출력 

 <p>Output, for each set, is either the message "No lines were found", or the message "The following lines were found:", followed by the sets of points lying on straight lines, each set ordered first by x, and if the x's are equal, then by y. All coordinates are in a field of width 4, and are separated by a comma; the points are delimited by brackets, with no spaces between successive points. The lines themselves are ordered in a similar manner to the points on each line; i.e. by considering the first point on each line, and if more than one line starts at that point, by considering the second point on the line.</p>

