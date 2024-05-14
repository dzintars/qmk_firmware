# Colemak-DH by Dzintars

My keyboard is tilted forward and front of it is lifted up. About 2cm from the table to back of the keeb.
My hands are resting on about 3cm thick "books". They don't hang in the air, like many suggests to do.
I don't use tilting to the left and right.

## Context and requirements

-   Linux only
-   Window manager support (Sway, i3, Hyprland)
-   Tmux support
-   Vim support
-   Hand alternation as much as possible (not pressing two keys with the same hand except copy/paste)
-   Qwerty support for some rare situations (Minecraft :) )

## Things to improve

Will try to list things i found frustrating or "non-ergonomic" in this layout.

-   [ ] ALT key is not often used, but it is still hard to reach.
-   [ ] Transition to Qwerty and back could be more easy/better trained.
-   [ ] Number row still kind of sucks. Too far for me.
-   [ ] I would love to have USB-A/C port in the keyboard for the YubiKey. (I don't use laptop).
-   [ ] Switching Sway workspaces by numbers is hard. Could use "tap-dance".

## Experience

-   Vim's JKLH is quite easy to get used to. I didn't remap them to the home row, like many do. It's absolutely not a huge deal at all. Think of it like flying - J goes for "Dive down" and K goes for "Dive up".
-   In Tmux I use `Ctrl + t` as my leader. Works really well. Easy to reach.

## Notes

Empty layout template:

```c
  // [_LX] = LAYOUT(
  // //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
  //    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  // //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
  //    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  // //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
  //    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  // //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
  //    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  // //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
  //                                   KC_NO,   KC_NO,   KC_NO,                     KC_NO,   KC_NO,   KC_NO
  //                               // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  // )
```
