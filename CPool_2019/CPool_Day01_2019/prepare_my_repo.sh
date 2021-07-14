#!/bin/bash

blih -u steven.zheng@epitech.eu repository create $1
blih -u steven.zheng@epitech.eu repository setacl $1 ramassage-tek r
blih -u steven.zheng@epitech.eu repository getacl $1
