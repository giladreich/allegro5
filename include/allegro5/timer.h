/*         ______   ___    ___
 *        /\  _  \ /\_ \  /\_ \
 *        \ \ \L\ \\//\ \ \//\ \      __     __   _ __   ___
 *         \ \  __ \ \ \ \  \ \ \   /'__`\ /'_ `\/\`'__\/ __`\
 *          \ \ \/\ \ \_\ \_ \_\ \_/\  __//\ \L\ \ \ \//\ \L\ \
 *           \ \_\ \_\/\____\/\____\ \____\ \____ \ \_\\ \____/
 *            \/_/\/_/\/____/\/____/\/____/\/___L\ \/_/ \/___/
 *                                           /\____/
 *                                           \_/__/
 *
 *      Timer routines.
 *
 *      See readme.txt for copyright information.
 */

/* Title: Timer routines
 */

#ifndef ALLEGRO_TIMER_H
#define ALLEGRO_TIMER_H

#include "allegro5/base.h"

#ifdef __cplusplus
   extern "C" {
#endif


/* Function: ALLEGRO_USECS_TO_SECS
 */
#define ALLEGRO_USECS_TO_SECS(x)      ((x) / 1000000.0)

/* Function: ALLEGRO_MSECS_TO_SECS
 */
#define ALLEGRO_MSECS_TO_SECS(x)      ((x) / 1000.0)

/* Function: ALLEGRO_BPS_TO_SECS
 */
#define ALLEGRO_BPS_TO_SECS(x)        (1.0 / (x))

/* Function: ALLEGRO_BPM_TO_SECS
 */
#define ALLEGRO_BPM_TO_SECS(x)        (60.0 / (x))


/* Type: ALLEGRO_TIMER
 */
typedef struct ALLEGRO_TIMER ALLEGRO_TIMER;


AL_FUNC(ALLEGRO_TIMER*, al_install_timer, (double speed_secs));
AL_FUNC(void, al_uninstall_timer, (ALLEGRO_TIMER *timer));
AL_FUNC(void, al_start_timer, (ALLEGRO_TIMER *timer));
AL_FUNC(void, al_stop_timer, (ALLEGRO_TIMER *timer));
AL_FUNC(bool, al_timer_is_started, (const ALLEGRO_TIMER *timer));
AL_FUNC(double, al_get_timer_speed, (const ALLEGRO_TIMER *timer));
AL_FUNC(void, al_set_timer_speed, (ALLEGRO_TIMER *timer, double speed_secs));
AL_FUNC(int64_t, al_get_timer_count, (const ALLEGRO_TIMER *timer));
AL_FUNC(void, al_set_timer_count, (ALLEGRO_TIMER *timer, int64_t count));
AL_FUNC(ALLEGRO_EVENT_SOURCE *, al_get_timer_event_source, (ALLEGRO_TIMER *timer));


#ifdef __cplusplus
   }
#endif

#endif          /* ifndef ALLEGRO_TIMER_H */
