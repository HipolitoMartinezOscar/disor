require_relative 'alfabeto/Alfabeto.rb'
require_relative 'procesar/Cifrador.rb'
require_relative 'procesar/Descifrador.rb'

alfabeto = Alfabeto.new()
cifrador = Cifrador.new(alfabeto)
descifrador = Descifrador.new(alfabeto)
puts cifrador.cifrarTexto(2,'hola')
puts descifrador.descifrarTexto(2,'jqnc')
