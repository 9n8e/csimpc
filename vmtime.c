int vmTime() { return 1; }

/* right now this looks stupid but the end goal is so that it will return the current time from an active counter, probably preserved on a separate thread, so that time can be measured between registers as well as stored elsewhere
although i'm pretty sure if i bring this project out far enough a counter can be implemented implicitly within the registers via asm instructions */
