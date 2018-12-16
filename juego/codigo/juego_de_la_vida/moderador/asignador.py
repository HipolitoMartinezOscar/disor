#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Dec 13 23:19:31 2018

@author: hipolito
"""

class Asignador():
    
    
    def asignar_vecinos(self,celulas):
        for i in celulas:
            #ejemplo
            i.vecinos.append(i+1)
        
        
        
        