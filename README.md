# Modelos de Aprendizaje Supervisado para la Clasificación de Señales EMG (Español / English)
Este repositorio contiene el código y los recursos para la clasificación de señales de electromiografía (EMG) utilizando varios algoritmos de aprendizaje supervisado. El proyecto tiene como objetivo comparar el rendimiento de diferentes modelos en un conjunto de datos obtenido de Kaggle y probarlos en un circuito de adquisiciòn diseñado y montado en fìsico. 

## Reconocimientos
En este proyecto, la estructura de Red Neuronal del tercer modelo implementado tomó de guía el aplicado en el código del Modelo de Kaggle encontrado en https://www.kaggle.com/code/drbilal216/emg-signal-complete-model, que está licenciado bajo Apache 2.0. Apreciamos su trabajo y lo utilizamos como guía para implementar nuestra solución, analizando y estudianto cada parte y ajustando a la aplicación del circuito montado en físico para el proyecto en cuestión. A su vez, el desarrollado del modelo Naive Bayes se construyó de cero tomando de guía el artículo encontrado en https://medium.com/analytics-vidhya/naive-bayes-algorithm-implementation-from-scratch-f9a2a12789b5 (Khushijain. Analytics Vidhya. Naive bayes algorithm implementation from scratch, 2021).

## Descripción General
En aplicaciones biomédicas las señales electromiográficas (EMG) deben ser procesadas y analizadas en detalle, por lo que se utilizan distintos métodos de procesamiento de señales, Inteligencia Artificial (IA) y redes neuronales para los problemas de interpretación y clasificación que se puedan encontrar. El objetivo general del proyecto es estudiar y aplicar un algoritmo de Machine Learning (ML) o aprendizaje automático, específicamente de aprendizaje supervisado, para clasificar señales EMG de miembro superior con una precisión no menor al 90% y una eficiencia notable. Este algoritmo, elegido cuidadosamente luego de comparaciones de performance entre distintos modelos, utilizaría estas señales para permitir el movimiento asistido de la muñeca y la mano, posibilitando así la ejecución de movimientos de agarre básico.

## Estructura del Repositorio

```
├── Models
│   ├── KNN-results.ipynb        # Notebook para el Modelo de K-Vecinos Más Cercanos: Preprocesamiento, entrenamiento y evaluación
│   ├── NB-results.ipynb        # Notebook para el Modelo de Naive Bayes: Preprocesamiento, entrenamiento y evaluación
│   └── NN-results.ipynb             # Notebook para el Modelo de Red Neuronal: Preprocesamiento, entrenamiento y evaluación
├── Test & comparisons
│   ├── Comparing_models_results.ipynb        # Notebook para la comparación de resultados de los tres modelos, utilizando los modelos ya entrenados y guardados (en la corrida de los notebooks de 'Models')
│   └── Serial_com_TESIS_results_3tests.ipynb             # Pruebas con el circuito de adquisición a tiempo real del modelo KNN implementado (arrojó mejores resultados)
└── README.md                 # Descripción general del proyecto e instrucciones
```

## Modelos
Cada notebook en el directorio de modelos incluye el pipeline completo para un modelo específico, cubriendo el preprocesamiento de datos, la extracción de características, el entrenamiento del modelo y la evaluación.

KNN: El algoritmo K-Nearest Neighbors (KNN) es una herramienta sencilla y potente de aprendizaje automático para tareas de clasificación. A diferencia de algunos modelos complejos, KNN tampoco requiere conjuntos de datos de entrenamiento muy grandes. En cambio, se basa en el concepto de similitud: encontrar los vecinos más cercanos a un nuevo punto de datos.
  Con un tiempo de entrenamiento notablemente menor al de la Red Neuronal pero no tan corto como el del Naive Bayes, el algoritmo implementado de KNN resultó ser el de mejor rendimiento y el más conveniente también para una aplicación a tiempo real.

Naive Bayes (NB): El algoritmo Naive Bayes (NB) se trata de una poderosa herramienta de ML, particularmente para tareas como clasificación de texto y filtrado. Su fundamento radica en el teorema de Bayes que, como ya se mencionó, permite calcular la probabilidad de la ocurrencia de un evento en función de probabilidades condicionales. Uno de los puntos fuertes de este modelo es su eficiencia, y en comparación con modelos más complejos, Naive Bayes requiere menos datos de entrenamiento y puede hacer predicciones rápidamente. Esto se debe a que supone independencia entre cada par de características, una suposición que simplifica los cálculos. Sin embargo, esta misma suposición también puede ser una debilidad. Si las características son verdaderamente interdependientes, la precisión del modelo puede verse afectada.
  Para este caso se observó el menor tiempo de ejecución tanto para el entrenamiento como para la predicción del conjunto de prueba, sin embargo obtuvo también el menor porcentaje de precisión y de puntuación F1, lo que evidencia la ya anteriormente mencionada simplicidad del modelo y la falta de adaptabilidad que lo distingue y, para casos un poco más complejos como el presente, lo deja en desventaja con otros algoritmos.

Red Neuronal (NN): Las redes neuronales representan uno de los pilares fundamentales del ML y la inteligencia artificial, inspiradas en la compleja red de conexiones neuronales que componen el cerebro humano. Una red neuronal típica está compuesta por múltiples capas de nodos interconectados, cada uno de los cuales recibe información de entrada (la data) y la combina con pesos (W1, W2, ...), actuando esencialmente como diales ajustables que controlan la importancia de esa entrada para la tarea específica que la red está aprendiendo. Esta combinación ponderada de entradas es entonces procesada por una función de activación, que determina si y en qué medida la señal se transmite a nodos posteriores en la red. 
  Este modelo presenta el tiempo de entrenamiento más largo, tomando a su vez recursos computacionales un poco más considerables que el resto de los modelos, pero dando mucha más precisión que el Naive Bayes y una mejor proporción de Verdaderos y Falsos positivos/negativos.

## Instalación
Para ejecutar los notebooks, asegúrate de tener el entorno requerido. Puedes configurar el entorno usando Conda o Pip.

  ### Usando Conda
    conda env create -f environment.yml
    conda activate emg-classification
  
  ### Usando Pip
    pip install -r requirements.txt
    
## Uso
Descargar el conjunto de datos: Asegúrate de tener el conjunto de datos de EMG descargado desde el repositorio UCI que puede encontrar en https://archive.ics.uci.edu/dataset/481/emg+data+for+gestures

Ejecutar los notebooks: Abre y ejecuta los notebooks en el directorio notebooks para reproducir el análisis y los resultados. Los pasos de preprocesamiento están incluidos en cada notebook.

## Resultados
Los resultados del análisis, incluidas las métricas de rendimiento y las visualizaciones, se pueden observar en los notebooks de cada modelo, así como en el apartado de comparaciones.
 Allí encontrará todas las gráficas y matrices de confusión analizadas en el proyecto.
 
## Contribuciones
Las contribuciones son bienvenidas. Si tienes sugerencias o mejoras, no dudes en abrir un issue o enviar un pull request.


# Supervised models for EMG Signals classification (Español / English)
Code for the classification of Electromyography (EMG) signals using various supervised learning algorithms. The project is part of a thesis that aims to compare the performance of different models on a dataset obtained from Kaggle and test on a physical circuit of adquisition.

## Acknowledgments

This project was inspired by the code from the XYZ Project, which is licensed under the Apache License 2.0. We appreciate their work and used it as a guide for implementing our own solution.



