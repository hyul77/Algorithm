-- 코드를 입력하세요
SELECT ANIMAL_TYPE, coalesce(NAME, 'No name') AS NAME, SEX_UPON_INTAKE
from ANIMAL_INS
order by ANIMAL_ID ASC;