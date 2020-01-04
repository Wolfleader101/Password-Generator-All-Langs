const Characters = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM1234567890`~!@#$%^&*()_+{}|\;:,<.>/?".split(''); //characters that are used for passcode
const StringLength = Characters.length - 1;

function GenRandom() {
    return Characters[Math.floor((Math.random() * StringLength) + 1)];
}

function GeneratePassword() {
    let length = 12;
    let Pswd = "";

    for (i = 0; i < length; i++)
    {     
        Pswd += GenRandom();
    }
    console.log(Pswd);
}
GeneratePassword();