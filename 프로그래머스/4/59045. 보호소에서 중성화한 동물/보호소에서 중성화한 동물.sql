-- 코드를 입력하세요
SELECT AI.ANIMAL_ID, AI.ANIMAL_TYPE, AI.NAME
from ANIMAL_INS AI
left join ANIMAL_OUTS AO on AI.ANIMAL_ID = AO.ANIMAL_ID
where (AI.SEX_UPON_INTAKE like 'Intact%') 
and (AO.SEX_UPON_OUTCOME like 'Neutered%' or AO.SEX_UPON_OUTCOME like 'Spayed%')