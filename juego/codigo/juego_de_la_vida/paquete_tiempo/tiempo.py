#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Dec 13 23:13:39 2018

@author: hipolito
"""



class Tiempo():
    
    
    
    def __init__(self):
        self.__linea_del_tiempo = []
        self.posicion_actual = len(self.linea_del_tiempo)
     
        
    
    def agregar_momento(self,celulas):
        self.__linea_del_tiempo.append(celulas)
        self.posicion_actual = len(self.linea_del_tiempo)
        
        
    def actual(self):
        
        return self.linea_del_tiempo[self.posicion_actual]
    
    
     def anterior(self):
          if self.posicion_actual > 0:
              self.posicion_actual--
              return self.linea_del_tiempo[self.posicion_actual]
    
     def siguiente(self):
         if self.posicion_actual < len(self.linea_del_tiempo):
             self.posicion_actual++
             return self.linea_del_tiempo[self.posicion_actual]
        
        
    
    
    