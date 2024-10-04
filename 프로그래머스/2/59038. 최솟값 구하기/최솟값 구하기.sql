-- 코드를 입력하세요
SELECT DATETIME AS 시간
from ANIMAL_INS
where DATETIME = (select MIN(DATETIME) from ANIMAL_INS)
