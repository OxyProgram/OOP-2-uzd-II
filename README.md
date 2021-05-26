Objektinio programavimo 2 užduotis Programos veikimo principas:

Vartotojas yra paprašomas įvesti studento vardą, pavardę. Vartotojas yra paprašomas įvesti studento namų darbų rezultatus. Jeigu visi rezultatai suvesti, reikia įvesti * (žvaigždutę). Vartotojas yra prašomas įvesti studento egzamino rezultatą. Vartotojas yra prašomas įveskito kito studento duomenis. Jeigu visi studentai įvesti, reikia įvesti * (žvaigždutę). Vartotojas yra prašomas pasirinkti, ar skaičiuoti vidurkį, ar medianą. Atitinkamai reikia įrašyti 1 arba 2. Vartotojui sugeneruojama lentelė su studento duomenimis. Programos įdiegimas:

Atidaryti terminalą atsisiųstų failų aplanke. Į komandinę eilutę įrašyti "make" ir bus sugeneruotas output.exe failas. Paleisti output.exe failą.

Nuo v0.4: Vartotojas yra prašomas sugeneruoti pasirinkto dydžio studentų sąrašą. Pagal sugeneruotą failą terminale yra parodomas laikas, kurį užtruko programa tą sąrašą apdorojant.

Versijos:

v0.1 - Įvykdyti užduoties reikalavimai. </br>
v0.2 - Pridėta galimybė nuskaityti duomenis iš txt failo, studentų vardų rikiavimas alfabetiškai.</br>
v0.3 - Atnaujinta programos struktūra, sukurti papildomi .cpp ir .h failai.</br>
v0.4 - Sistemos tikslas pakeistas į tam tikrų užduočių laiko matavimą ir testavimą.</br>
v0.5 - Skirtingų tipų konteinerių testavimas atliekant tam tikras užduotis.</br>
v1.0 - Naudojami 2 konteineriai, paspartintas programos veikimas.</br>
v1.1 - Pakeista programos struktūra. Iš student struct pereitą prie class.</br>
v1.2 - Pridėtos "gerosios praktikos" funkcijos klasei Student.</br>
v1.5 - Pridėta abstrakti klasė Person, kurią paveldi klasė Student.</br>
v2.0 - Pridėta UnitTestai, sukurtas setup.msi failas patogesniam programos įdiegimui.</br>

![image](https://user-images.githubusercontent.com/75229680/115959880-1c25c400-a517-11eb-8f79-b0773f6790e9.png)

Programos įdiegimo instrukcija:</br>
Paleidžiame setup.msi failą, vykdome setup-wizard nurodymus, įdiegiame programą. Po to galime paleisti programą.</br>
ARBA</br>
Atidarome terminalą arba powershell atsisiųstame aplanke, suvedame komandą "make" ir po to paleidžiame output.exe failą (reikalingas c++ kompiliatorius).</br>



