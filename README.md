# Vector  <br>
Testai:    <br>
   <br>
Nuskaitymo testas naudojant []:   <br>
mano vector: 0, std vector: 0   <br>
mano vector: 1, std vector: 1   <br>
mano vector: 2, std vector: 2   <br>
mano vector: 3, std vector: 3   <br>
mano vector: 4, std vector: 4   <br>
mano vector: 5, std vector: 5   <br>
mano vector: 6, std vector: 6   <br>
mano vector: 7, std vector: 7   <br>
mano vector: 8, std vector: 8   <br>
mano vector: 9, std vector: 9   <br>
   <br>
   <br>
Capacity test:   <br>
0: mano vector: 1, std vector: 1   <br>
1: mano vector: 2, std vector: 2   <br>
2: mano vector: 4, std vector: 4   <br>
3: mano vector: 4, std vector: 4   <br>
4: mano vector: 8, std vector: 8  <br>
5: mano vector: 8, std vector: 8  <br>
6: mano vector: 8, std vector: 8  <br>
7: mano vector: 8, std vector: 8  <br>
8: mano vector: 16, std vector: 16  <br>
9: mano vector: 16, std vector: 16  <br>
10: mano vector: 16, std vector: 16  <br>
11: mano vector: 16, std vector: 16  <br>
12: mano vector: 16, std vector: 16  <br>
13: mano vector: 16, std vector: 16  <br>
14: mano vector: 16, std vector: 16  <br>
15: mano vector: 16, std vector: 16  <br>
16: mano vector: 32, std vector: 32  <br>
17: mano vector: 32, std vector: 32  <br>
  <br>
  <br>
iterator print all test:   <br>
mano vector iterator: 0   <br>
mano vector iterator: 1   <br>
mano vector iterator: 2   <br>
mano vector iterator: 3   <br>
mano vector iterator: 4   <br>
mano vector iterator: 5   <br>
mano vector iterator: 6   <br>
mano vector iterator: 7   <br>
mano vector iterator: 8   <br>
mano vector iterator: 9   <br>
std vector iterator: 0   <br>
std vector iterator: 1  <br>
std vector iterator: 2  <br>
std vector iterator: 3  <br>
std vector iterator: 4  <br>
std vector iterator: 5  <br>
std vector iterator: 6  <br>
std vector iterator: 7  <br>
std vector iterator: 8  <br>
std vector iterator: 9  <br>
  <br>
clear test:  <br>
pries: mano vector size: 10, std vector size: 10  <br>
po: mano vector size: 0, std vector size: 0  <br>
  <br>
  <br>
resize test:  <br>
iterator print before resize:  <br>
  mano vector iterator: 0  <br>
  mano vector iterator: 1  <br>
  mano vector iterator: 2  <br>
  mano vector iterator: 3  <br>
  mano vector iterator: 4  <br>
  mano vector iterator: 5  <br>
  mano vector iterator: 6  <br>
  mano vector iterator: 7  <br>
  mano vector iterator: 8  <br>
  mano vector iterator: 9  <br>
  std vector iterator: 0  <br>
  std vector iterator: 1  <br>
  std vector iterator: 2  <br>
  std vector iterator: 3  <br>
  std vector iterator: 4  <br>
  std vector iterator: 5  <br>
  std vector iterator: 6  <br>
  std vector iterator: 7  <br>
  std vector iterator: 8  <br>
  std vector iterator: 9  <br>

iterator print after resize:  <br>
  mano vector iterator: 0  <br>
  mano vector iterator: 1  <br>
  mano vector iterator: 2  <br>
  mano vector iterator: 3  <br>
  mano vector iterator: 4  <br>
  std vector iterator: 0  <br>
  std vector iterator: 1  <br>
  std vector iterator: 2  <br>
  std vector iterator: 3  <br>
  std vector iterator: 4 <br>
  <br>
allocation speed test:<br>
<br>
| elementų sk.  | mano vector time   | std vector time |
| ------------- | ------------------ | --------------- |
| 10000         | 0 S                | 0 S             |
| 100000        | 0.001001 S         | 0.001 S         |
| 1000000       | 0.007002 S         | 0.011003 S      |
| 10000000      | 0.083503 S         | 0.118026 S      |
| 100000000     | 0.870735 S         | 1.19327 S       |
<br>
<br>
Studentų programos speed test:<br>
mano vector:<br>
Naudoti strategija pirma(1), antra(2), mano sena(3): 1<br>
Naudoti Vector(1), list(2), deque(3): 1<br>
Failo pavadinimas: Studentai100000.txt<br>
Failas nuskaitytas per: 1.13525 S <br>
Studentai atskirti pagal rezultatus per: 0.144033 S <br>
Vykeliai surasyti i faila per: 1.81341 S <br>
Nevykeliai surasyti i faila per: 1.28782 S <br>
Uzduotis atlikta per: 4.38351 S<br>
<br>
std vector:<br>
Naudoti strategija pirma(1), antra(2), mano sena(3): 1<br>
Naudoti Vector(1), list(2), deque(3): 1<br>
Failo pavadinimas: Studentai100000.txt<br>
Failas nuskaitytas per: 1.07624 S <br>
Studentai atskirti pagal rezultatus per: 0.147033 S <br>
Vykeliai surasyti i faila per: 1.84841 S <br>
Nevykeliai surasyti i faila per: 1.30129 S <br>
Uzduotis atlikta per: 4.37398 S<br>
<br>
<br>
Count capacity updates test:<br>
mano vector updates: 27, std vector updates: 28<br>
<br>
pastaba: Vector turi 1 mažiau updates, nes pradžioje yra inicializuotas su 1 capacity, kai std::vector pradeda nuo 0.<br>