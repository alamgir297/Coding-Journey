#ifndef SOUNDS_H_INCLUDED
#define SOUNDS_H_INCLUDED



#endif // SOUNDS_H_INCLUDED

///////SOUND EFFECTS///////
void sound_Select(){
        PlaySound("selectClick.wav", NULL, SND_FILENAME | SND_ASYNC);
}
void sound_Error(){
        PlaySound("error.wav", NULL, SND_FILENAME | SND_ASYNC);
}
void sound_Successful(){
        PlaySound("successful.wav", NULL, SND_FILENAME | SND_ASYNC);
}
void sound_Loading(){
            PlaySound("loading.wav", NULL, SND_LOOP | SND_ASYNC);
}
void sound_Fnished(){
            PlaySound("gameCompleted.wav", NULL, SND_FILENAME | SND_ASYNC);
}
void sound_Popup(){
            PlaySound("questionPopup.wav", NULL, SND_FILENAME | SND_ASYNC);
}
void sound_Correct(){
            PlaySound("correctAnswer.wav", NULL, SND_FILENAME | SND_ASYNC);
}
void sound_Wrong(){
            PlaySound("wrongAnswer.wav", NULL, SND_FILENAME | SND_ASYNC);
}
void sound_Menu(){
            PlaySound("menu.wav", NULL, SND_FILENAME | SND_ASYNC);
}
void sound_Score(){
            PlaySound("scoreReveal.wav", NULL, SND_FILENAME | SND_ASYNC);
}
void sound_BG(){
            PlaySound("background.wav", NULL, SND_LOOP | SND_ASYNC);
}

void sound_Stop(){
            PlaySound(NULL, NULL, 0);
}
