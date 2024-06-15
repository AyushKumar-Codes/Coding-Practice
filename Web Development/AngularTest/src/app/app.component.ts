import { Component } from '@angular/core';
import { FormGroup,FormControl, Validators } from '@angular/forms';
import { AppService } from './app.service';
@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrl: './app.component.css'
})
export class AppComponent {
  // title = 'AngularTest';
  // ayush:boolean = false;
  // n : number[] = [1,2,3];
  // t : number= 2;
  // div(){
  //   this.ayush=true;
  // }
  // email:String = "";
  // gender:string=""
  // bike:string="";
  // reds = false;
  // color(){
  //   this.reds=true;
  // }
  

  //Template Driven Form
  // email: string ="";
  // password: string = "";

  // myForm(){
  //   if(this.email){
  //     alert(this.email);
  //   }
  // }

    //Http & services & dependecy Injector

    public user :any =[];
    constructor(private appService : AppService){
      this.appService.getuser().subscribe(res=>{
          this.user = res;
        } );
      }
    
}
