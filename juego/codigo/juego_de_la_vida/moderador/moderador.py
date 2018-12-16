#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Dec 11 23:10:57 2018

@author: hipolito
"""

from paquete_celulas import *
from paquete_tiempo import *

class Morerador():
    
    
    
    def __init__(self,cantidad_de_celulas,cantidad_vecinos):
        
        self.tiempo
        self.cantidad_de_celulas = cantidad_de_celulas;
        self.celulas = self.crear_celulas()
        self.Tiempo = tiempo()
        self.tiempo.asignar_vecinos(celulas)
        
        
        
    def crear_celulas(self,cantidad,cantidad_vecinos):
        
        celulas = []
        
        for i in range(cantidad):
             celula = Celula(cantidad_vecinos)
             celula.nombre = i;
             celulas.append(celula)
             
        return celulas;
            
            
    def ejecutar_iteracion(self,tiempo):
        
        
        for i in self.celulas:
            if(i.cantidad_vecinos < 3):
                i.cambiar_estado()
            
        
        instante_actual = celulas[:];
        tiempo.linea_del_tiempo
        
        
        
        

