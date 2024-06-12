# Modelos de Aprendizaje Supervisado para la Clasificación de Señales EMG (Español / English)
Este repositorio contiene el código y los recursos para la clasificación de señales de electromiografía (EMG) utilizando varios algoritmos de aprendizaje supervisado. El proyecto tiene como objetivo comparar el rendimiento de diferentes modelos en un conjunto de datos obtenido de Kaggle y probarlos en un circuito de adquisiciòn diseñado y montado en fìsico. 

## Reconocimientos

Este proyecto se inspiró en el código del Proyecto XYZ, que está licenciado bajo Apache 2.0. Apreciamos su trabajo y lo utilizamos como guía para implementar nuestra solución, ajustada a la aplicación del circuito montado en físico para el proyecto en cuestión.

## Descripción General
En aplicaciones biomédicas las señales electromiográficas (EMG) deben ser procesadas y analizadas en detalle, por lo que se utilizan distintos métodos de procesamiento de señales, Inteligencia Artificial (IA) y redes neuronales para los problemas de interpretación y clasificación que se puedan encontrar. El objetivo general del proyecto es estudiar y aplicar un algoritmo de Machine Learning (ML) o aprendizaje automático, específicamente de aprendizaje supervisado, para clasificar señales EMG de miembro superior con una precisión no menor al 90% y una eficiencia notable. Este algoritmo, elegido cuidadosamente luego de comparaciones de performance entre distintos modelos, utilizaría estas señales para permitir el movimiento asistido de la muñeca y la mano, posibilitando así la ejecución de movimientos de agarre básico.

## Estructura del Repositorio

```
├── Models
│   ├── KNN-results.ipynb        # Notebook para el Modelo 1: Preprocesamiento, entrenamiento y evaluación
│   ├── NB-results.ipynb        # Notebook para el Modelo 2: Preprocesamiento, entrenamiento y evaluación
│   └── NN-results.ipynb             # Notebooks adicionales para otros modelos
├── Test & comparisons
│   ├── Comparing_models_results.ipynb        # Notebook para el Modelo 1: Preprocesamiento, entrenamiento y evaluación
│   └── Serial_com_TESIS_results_3tests.ipynb             # Notebooks adicionales para otros modelos
└── README.md                 # Descripción general del proyecto e instrucciones
```

## Modelos
Cada notebook en el directorio de modelos incluye el pipeline completo para un modelo específico, cubriendo el preprocesamiento de datos, la extracción de características, el entrenamiento del modelo y la evaluación.

KNN: Detalles y resultados para el Modelo 1.
Naive Bayes (NB): Detalles y resultados para el Modelo 2.
Red Neuronal (NN): Detalles y resultados para el Modelo 3.

## Instalación
Para ejecutar los notebooks, asegúrate de tener el entorno requerido. Puedes configurar el entorno usando Conda o Pip.

  ### Usando Conda
    conda env create -f environment.yml
    conda activate emg-classification
  
  ### Usando Pip
    pip install -r requirements.txt
    
## Uso
Descargar el conjunto de datos: Asegúrate de tener el conjunto de datos de EMG descargado desde el repositorio UCI que puede encontrar en https://archive.ics.uci.edu/dataset/481/emg+data+for+gestures

Procesar los datos: Los pasos de preprocesamiento están incluidos en cada notebook.

Ejecutar los notebooks: Abre y ejecuta los notebooks en el directorio notebooks para reproducir el análisis y los resultados.

## Resultados
Los resultados del análisis, incluidas las métricas de rendimiento y las visualizaciones, se pueden observar en los notebooks de cada modelo, así como en el apartado de comparaciones
 Allí encontrará todas las gráficas y matrices de confusión analizadas en el proyecto.
 
## Contribuciones
Las contribuciones son bienvenidas. Si tienes sugerencias o mejoras, no dudes en abrir un issue o enviar un pull request.


# Supervised models for EMG Signals classification (Español / English)
Code for the classification of Electromyography (EMG) signals using various supervised learning algorithms. The project is part of a thesis that aims to compare the performance of different models on a dataset obtained from Kaggle and test on a physical circuit of adquisition.

## Acknowledgments

This project was inspired by the code from the XYZ Project, which is licensed under the Apache License 2.0. We appreciate their work and used it as a guide for implementing our own solution.



