-- 코드를 입력하세요
SELECT count(*) AS USERS
from USER_INFO
where 1=1
and (AGE >=20 and AGE <=29)
and YEAR(JOINED) = 2021;