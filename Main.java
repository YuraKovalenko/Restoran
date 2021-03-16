package com.java;

import java.util.Scanner;

class Animal {
    private String type; //тип
    private String kid; //клас
    private String family; //сімейство
    private String genus; //рід
    private String species; //вид
    private String subspecies; //підвид
    private int age; //вік
    private String color; //окрас

    //тип
    public String getType() {
        return type;
    }
    public void setType(String type) {
        this.type = type;
    }
    //клас
    public String getKid() {
        return kid;
    }
    public void setKid(String kid) {
        this.kid = kid;
    }
    //сімейство
    public String getFamily() {
        return family;
    }
    public void setFamily(String family) {
        this.family = family;
    }
    //рід
    public String getGenus() {
        return genus;
    }
    public void setGenus(String genus) {
        this.genus = genus;
    }
    //вид
    public String getSpecies() {
        return species;
    }
    public void setSpecies(String species) {
        this.species = species;
    }
    //підвид
    public String getSubspecies() {
        return subspecies;
    }
    public void setSubspecies(String subspecies) {
        this.subspecies = subspecies;
    }
    //вік
    public int getAge() {
        return age;
    }
    public void setAge(int age) {
        this.age = age;
    }
    //окрас
    public String getColor() {
        return color;
    }
    public void setColor(String color) {
        this.color = color;
    }

    public Animal(String type, String kid, String family, String genus, String species, String subspecies, int age, String color) {
        this.type = type;
        this.kid = kid;
        this.family = family;
        this.genus = genus;
        this.species = species;
        this.subspecies = subspecies;
        this.age = age;
        this.color = color;
    }

    @Override
    public String toString(){
        return "Тип = " + type + " клас = " + kid + " сімейство = " + family + " рід = " + genus + " вид = " +
                species + " підвид = " + subspecies + " вік = " + age + " окрас = " +color;
    }
}

class Initialisation{
    private Animal []animal = new Animal[10];
    public void initialization(Animal[] animal){
        animal[0]=new Animal("q0","w","cat","r","sp1","y",10,"red");
        animal[1]=new Animal("q1","w","dog","r","sp2","y",10,"red");
        animal[2]=new Animal("q2","w","cat","r","sp3","y",17,"blue");
        animal[3]=new Animal("q3","w","cow","r","sp3","y",12,"green");
        animal[4]=new Animal("q4","w","cat","r","sp2","y",20,"red");
        animal[5]=new Animal("q5","w","cow","r","sp1","y",18,"green");
        animal[6]=new Animal("q6","w","cat","r","sp1","y",10,"red");
        animal[7]=new Animal("q7","w","dog","r","sp3","y",15,"green");
        animal[8]=new Animal("q8","w","cow","r","sp1","y",15,"yellow");
        animal[9]=new Animal("q9","w","dog","r","sp2","y",17,"blue");
    }
}

class AnimalController{
    private Animal []animal = new Animal[10];
    private int morThanAge;
    private String fam;
    private String sp,col;
    Initialisation init = new Initialisation();
    public int getMorThanAge(){
        return morThanAge;
    }
    public void setMorThanAge(int morThanAge){
        this.morThanAge=morThanAge;
    }
    public String getFam(){
        return fam;
    }
    public void setFam(String fam){
        this.fam=fam;
    }
    public String getSp(){
        return sp;
    }
    public void setSp(String sp){
        this.sp=sp;
    }
    public String getCol(){
        return col;
    }
    public void setCol(String col){
        this.col=col;
    }
    public void Task(){
        for (int i = 0; i < 10; i++){
            System.out.println(animal[i]);
        }
    }
    public void Task1(){
        for (int i = 0; i < 10; i++) {
            if (animal[i].getAge() > getMorThanAge()) {
                System.out.println(animal[i]);
            }
        }
    }
    public void Task2(){
        for (int i = 0; i < 10; i++) {
            //System.out.println(animal[i].getFamily());
            if (animal[i].getFamily().equals(fam)) {
                System.out.println(animal[i]);
            }
        }
    }
    public void Task3(){
        String[]str = new String[10];
        int count = 0;
        for (int i = 0; i < 10; i++) {
            if (animal[i].getSpecies().equals(sp) && animal[i].getColor().equals(col)) {
                str[i]=animal[i].getSpecies();
                System.out.println(animal[i]);
            }
        }
        for (int i = 0;i<10;i++){
            if (str[i]!=null){
                count++;
            }
        }
        if (count==0){
            System.out.println("Пусто");
        }
    }
    public void create(){
        init.initialization(animal);
    }
}

class AnimalView{
    public void printMenu(){
        System.out.println("1 щоб отримати весь список");
        System.out.println("2 щоб отримати список тварин старше заданого віку");
        System.out.println("3 щоб отримати список тварин заданого сімейства");
        System.out.println("4 щоб отримати список тварин заданого виду і окрасу");
        System.out.println("5 завершити роботу");
    }
    public void errorMessage(){
        System.out.println("ПОМИЛКА!!!");
    }
    public void messageForTask1(){
        System.out.println("введіть вік");
    }
    public void messageForTask2(){
        System.out.println("введіть назву сімейства");
    }
    public void messageForTask3(){
        System.out.println("введіть вид та окрас");
    }
}

class Start{
    private AnimalView animalView = new AnimalView();
    private AnimalController animalController = new AnimalController();
    private int inputNumber;
    public void go(){
        animalView.printMenu();
        Scanner scanner = new Scanner(System.in);
        inputNumber = scanner.nextInt();
        while (inputNumber != 5){
            animalController.create();
            switch (inputNumber){
                case 1:{
                    animalController.Task();
                    animalView.printMenu();
                    break;
                }
                case 2:{
                    animalView.messageForTask1();
                    int age = scanner.nextInt();
                    if(age<10 || age>20){
                        animalView.errorMessage();
                    }
                    animalController.setMorThanAge(age);
                    animalController.Task1();
                    animalView.printMenu();
                    break;
                }
                case 3:{
                    animalView.messageForTask2();
                    String fam = scanner.next();
                    String [] str = new String [3];
                    str[0] = new String("cow");
                    str[1] = new String("dog");
                    str[2] = new String("cat");
                    if (str[0].equals(fam) || str[1].equals(fam) || str[2].equals(fam)) {

                    }
                    else {
                        animalView.errorMessage();
                    }

                    animalController.setFam(fam.toString());
                    System.out.println("====");
                    animalController.Task2();
                    System.out.println("====");
                    animalView.printMenu();
                    break;
                }
                case 4:{
                    animalView.messageForTask3();
                    String sp = scanner.next(), col = scanner.next();
                    if (sp.equals("sp1") || sp.equals("sp2") || sp.equals("sp3")){

                    }
                    if (col.equals("blue") || col.equals("red") || col.equals("green") || col.equals("yellow")){

                    }
                    else {
                        animalView.errorMessage();
                    }
                    animalController.setSp(sp);
                    animalController.setCol(col);
                    System.out.println("====");
                    animalController.Task3();
                    System.out.println("====");
                    animalView.printMenu();
                    break;
                }
            }
            if(inputNumber<0 || inputNumber>5){
                animalView.errorMessage();
            }
            inputNumber = scanner.nextInt();
        }
    }
}

public class Main {

    public static void main(String[] args) {
        Start start = new Start();
        start.go();
    }
}


